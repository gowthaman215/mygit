import java.awt.Color;
import java.io.BufferedReader;
import java.io.FileReader;
import org.apache.pdfbox.pdmodel.PDDocument;
import org.apache.pdfbox.pdmodel.PDPage;
import org.apache.pdfbox.pdmodel.PDPageContentStream;
import org.apache.pdfbox.pdmodel.common.PDRectangle;
import org.apache.pdfbox.pdmodel.font.PDFont;
import org.apache.pdfbox.pdmodel.font.PDType1Font;
import org.apache.pdfbox.util.Matrix;

public class HelloWorldPDF {

    public static final String SOURCE_FILE = "D:\\Workspace\\HelloWorldPDF\\testfiles\\CSCF0003.ZZZ.txt";
    public static final String CREATED_PDF = "D:\\Workspace\\HelloWorldPDF\\testfiles\\CSCF0003.ZZZ.pdf";

    public static void main(String[] args) {

	// PDPage pdfPage = new PDPage(PDRectangle.A2); //1190.5513 X 1683.7795
	// PDPage pdfPage = new PDPage(PDRectangle.A3); //841.8898 X 1190.5513
	// PDPage pdfPage = new PDPage(PDRectangle.A4); //595.27563 X 841.8898
	convertToPDF(SOURCE_FILE, CREATED_PDF, PDRectangle.A3, PDType1Font.COURIER_BOLD, Color.BLACK, 11, 1.2f, true);
	System.out.println("Program ended");

    }

    public static void convertToPDF(String txtFile, String pdfFile, PDRectangle pageSize, PDFont fontType,
	    Color fontColor, float fontSize, float lineSpacing, Boolean landscapeEnabled) {
	try {

	    BufferedReader br = new BufferedReader(new FileReader(txtFile));
	    PDDocument pdfDoc = new PDDocument();
	    PDPage pdfPage = new PDPage(pageSize); // 841.8898 X 1190.5513
	    PDPageContentStream cs = new PDPageContentStream(pdfDoc, pdfPage);

	    PDRectangle pageArea = pdfPage.getMediaBox();
	    float pageHeight = pageArea.getHeight();

	    String line = "";
	    double currentHeight = 0;

	    pdfDoc.addPage(pdfPage);

	    if (landscapeEnabled) {
		pdfPage.setRotation(90);
		pageHeight = pageArea.getWidth();
		cs.transform(new Matrix(0, 1, -1, 0, pageHeight, 0));
	    }

	    cs.setFont(fontType, fontSize);
	    cs.setNonStrokingColor(fontColor);
	    cs.beginText();
	    cs.newLineAtOffset(10, pageHeight - (fontSize * lineSpacing));
	    cs.setLeading(fontSize * lineSpacing);
	    

	    while ((line = br.readLine()) != null) {
		currentHeight = currentHeight + (fontSize * lineSpacing);
		System.out.println("Line -- " + line);

		cs.showText(line);
		cs.newLine();

		if (currentHeight + (fontSize * lineSpacing) > pageHeight) {

		    cs.endText();
		    cs.close();

		    // reset currentHeight
		    currentHeight = 0;

		    // add pdfPage to the PDF document
		    pdfPage = new PDPage(pageSize);
		    pdfDoc.addPage(pdfPage);

		    cs = new PDPageContentStream(pdfDoc, pdfPage);

		    if (landscapeEnabled) {

			pdfPage.setRotation(90);
			pageHeight = pageArea.getWidth();
			cs.transform(new Matrix(0, 1, -1, 0, pageHeight, 0));

		    }
		    
		    cs.setFont(fontType, fontSize);
		    cs.setNonStrokingColor(fontColor);
		    cs.beginText();
		    cs.newLineAtOffset(10, pageHeight - (fontSize * lineSpacing));
		    cs.setLeading(fontSize * lineSpacing);
		    
		}

	    }

	    cs.endText();
	    cs.close();
	    br.close();

	    // save PDF document

	    pdfDoc.save(pdfFile);

	    pdfDoc.close();

	} catch (Exception e) {

	    // TODO Auto-generated catch block
	    e.printStackTrace();
	}
    }
}
