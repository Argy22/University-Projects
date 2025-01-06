package application;

import java.io.IOException;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import javafx.scene.image.Image;
import javafx.scene.paint.Color;
import javafx.scene.shape.Arc;
import javafx.scene.shape.ArcTo;
import javafx.scene.shape.ArcType;
import javafx.scene.shape.CubicCurve;
import javafx.scene.shape.Cylinder;
import javafx.scene.shape.Ellipse;
import javafx.scene.shape.HLineTo;
import javafx.scene.shape.Line;
import javafx.scene.shape.LineTo;
import javafx.scene.shape.MoveTo;
import javafx.scene.shape.Path;
import javafx.scene.shape.Polygon;
import javafx.scene.shape.QuadCurveTo;
import javafx.scene.shape.Rectangle;
import javafx.stage.Stage;
import javafx.scene.Group;
import javafx.scene.Node;

public class SceneController {
	
	private Stage stage;
	private Scene scene;
	private Parent root;
	private  double ArcDimension1, ArcDimension2, ArcDimension3, ArcDimension4, ArcDimension5, ArcDimension6;
	private  double CubicCurveDimension1, CubicCurveDimension2, CubicCurveDimension3, CubicCurveDimension4, CubicCurveDimension5, CubicCurveDimension6, CubicCurveDimension7, CubicCurveDimension8;
	private  double CylinderDimension1, CylinderDimension2;
	private  double EllipseDimension1, EllipseDimension2, EllipseDimension3, EllipseDimension4;
	private  double PolygonDimension1,PolygonDimension2,PolygonDimension3,PolygonDimension4,PolygonDimension5,PolygonDimension6;
	private  double RectangleDimension1, RectangleDimension2, RectangleDimension3, RectangleDimension4, RectangleDimension5, RectangleDimension6;
	private  double LineDimension1, LineDimension2, LineDimension3, LineDimension4;
	private  double PathDimension1, PathDimension2, PathDimension3, PathDimension4, PathDimension5, PathDimension6, PathDimension7, PathDimension8, PathDimension9, PathDimension10, PathDimension11, PathDimension12, PathDimension13;
	
	//User's Inputs
	@FXML public TextField ArcDim1,ArcDim2,ArcDim3,ArcDim4,ArcDim5,ArcDim6;
	@FXML public TextField CCDim1,CCDim2,CCDim3,CCDim4,CCDim5,CCDim6,CCDim7,CCDim8;
	@FXML public TextField CylDim1,CylDim2;
	@FXML public TextField ElDim1,ElDim2,ElDim3,ElDim4;
	@FXML public TextField PolDim1,PolDim2,PolDim3,PolDim4,PolDim5,PolDim6;
	@FXML public TextField RecDim1,RecDim2,RecDim3,RecDim4,RecDim5,RecDim6; 
	@FXML public TextField LineDim1,LineDim2,LineDim3,LineDim4;
	@FXML public TextField PathDim1, PathDim2, PathDim3, PathDim4, PathDim5, PathDim6, PathDim7, PathDim8, PathDim9, PathDim10, PathDim11, PathDim12, PathDim13;
	
	//HOME
	public void switchToHome(ActionEvent event) throws IOException {
		Parent root=FXMLLoader.load(getClass().getResource("HomeScene.fxml"));
		stage = (Stage)((Node)event.getSource()).getScene().getWindow();
		scene = new Scene(root);
		stage.setScene(scene);
		stage.show();
	}
	
	
	
	//ARC
	public void switchToSetArc(ActionEvent event) throws IOException {
		Parent root=FXMLLoader.load(getClass().getResource("SetArc.fxml"));
		stage = (Stage)((Node)event.getSource()).getScene().getWindow();
		scene = new Scene(root);
		stage.setScene(scene);
		stage.show();
	}
	
	public void switchToArc(ActionEvent event) throws IOException {
		
		ArcDimension1=Double.parseDouble(ArcDim1.getText());
		ArcDimension2=Double.parseDouble(ArcDim2.getText());
		ArcDimension3=Double.parseDouble(ArcDim3.getText());
		ArcDimension4=Double.parseDouble(ArcDim4.getText());
		ArcDimension5=Double.parseDouble(ArcDim5.getText());
		ArcDimension6=Double.parseDouble(ArcDim6.getText());
		
		Arc arc = new Arc();
        arc.setCenterX(ArcDimension1);
        arc.setCenterY(ArcDimension2);
        arc.setRadiusX(ArcDimension3);
        arc.setRadiusY(ArcDimension4);
        arc.setStartAngle(ArcDimension5);
        arc.setLength(ArcDimension6);
        
        arc.setType(ArcType.ROUND);
        arc.setStroke(Color.WHITE);
        arc.setFill(Color.PINK);
        
        
        Stage stage1 = new Stage();
        
        stage1.setTitle("Shape Chooser");
		Image icon = new Image(getClass().getResourceAsStream("icon.png"));
		stage1.getIcons().add(icon);
		
        Group group1 = new Group();
        group1.getChildren().add(arc);
        Scene scene1 = new Scene(group1,800,600);
        
        stage1.setScene(scene1);
        stage1.show();

	}
	
	
	
	//CUBIC CURVE
	public void switchToSetCubicCurve(ActionEvent event) throws IOException {
		Parent root=FXMLLoader.load(getClass().getResource("SetCubicCurve.fxml"));
		stage = (Stage)((Node)event.getSource()).getScene().getWindow();
		scene = new Scene(root);
		stage.setScene(scene);
		stage.show();
	}
	
	public void switchToCubicCurve(ActionEvent event) throws IOException {
		
		CubicCurveDimension1=Double.parseDouble(CCDim1.getText());
		CubicCurveDimension2=Double.parseDouble(CCDim2.getText());
		CubicCurveDimension3=Double.parseDouble(CCDim3.getText());
		CubicCurveDimension4=Double.parseDouble(CCDim4.getText());
		CubicCurveDimension5=Double.parseDouble(CCDim5.getText());
		CubicCurveDimension6=Double.parseDouble(CCDim6.getText());
		CubicCurveDimension7=Double.parseDouble(CCDim7.getText());
		CubicCurveDimension8=Double.parseDouble(CCDim8.getText());
		
		CubicCurve cubic = new CubicCurve();
        cubic.setStartX(CubicCurveDimension1);
        cubic.setStartY(CubicCurveDimension2);
        cubic.setControlX1(CubicCurveDimension3);
        cubic.setControlY1(CubicCurveDimension4);
        cubic.setControlX2(CubicCurveDimension5);
        cubic.setControlY2(CubicCurveDimension6);
        cubic.setEndX(CubicCurveDimension7);
        cubic.setEndY(CubicCurveDimension8);
        cubic.setStroke(Color.WHITE);
        cubic.setFill(Color.ORANGE);
        
        
        Stage stage2 = new Stage();
        
        stage2.setTitle("Shape Chooser");
		Image icon = new Image(getClass().getResourceAsStream("icon.png"));
		stage2.getIcons().add(icon);
		
        Group group2 = new Group();
        group2.getChildren().add(cubic);
        Scene scene2 = new Scene(group2,800,600);
        
        stage2.setScene(scene2);
        stage2.show();
        
	}

	
	
	//CYLINDER
	public void switchToSetCylinder(ActionEvent event) throws IOException {
		Parent root=FXMLLoader.load(getClass().getResource("SetCylinder.fxml"));
		stage = (Stage)((Node)event.getSource()).getScene().getWindow();
		scene = new Scene(root);
		stage.setScene(scene);
		stage.show();
	}
	
	public void switchToCylinder(ActionEvent event) throws IOException {
		
		CylinderDimension1=Double.parseDouble(CylDim1.getText());
		CylinderDimension2=Double.parseDouble(CylDim2.getText());
		
		
		Cylinder cylinder = new Cylinder();
        cylinder.setHeight(CylinderDimension1);
        cylinder.setRadius(CylinderDimension2); 
        
        
        Stage stage3 = new Stage();
        
        stage3.setTitle("Shape Chooser");
		Image icon = new Image(getClass().getResourceAsStream("icon.png"));
		stage3.getIcons().add(icon);
		
        Group group3 = new Group();
        group3.getChildren().add(cylinder);
        Scene scene3 = new Scene(group3,800,600);
        
        stage3.setScene(scene3);
        stage3.show();
	}
	
	
	
	//ELLIPSE
	public void switchToSetEllipse(ActionEvent event) throws IOException {
		Parent root=FXMLLoader.load(getClass().getResource("SetEllipse.fxml"));
		stage = (Stage)((Node)event.getSource()).getScene().getWindow();
		scene = new Scene(root);
		stage.setScene(scene);
		stage.show();
	}
	
	public void switchToEllipse(ActionEvent event) throws IOException {
		EllipseDimension1=Double.parseDouble(ElDim1.getText());
		EllipseDimension2=Double.parseDouble(ElDim2.getText());
		EllipseDimension3=Double.parseDouble(ElDim3.getText());
		EllipseDimension4=Double.parseDouble(ElDim4.getText());
		
		Ellipse ellipse = new Ellipse();
	    ellipse.setCenterX(EllipseDimension1);
	    ellipse.setCenterY(EllipseDimension2);
	    ellipse.setRadiusX(EllipseDimension3);
	    ellipse.setRadiusY(EllipseDimension4);
	    ellipse.setStroke(Color.WHITE);
	    ellipse.setFill(Color.BLUE);
        
        
        Stage stage4 = new Stage();
        
        stage4.setTitle("Shape Chooser");
		Image icon = new Image(getClass().getResourceAsStream("icon.png"));
		stage4.getIcons().add(icon);
		
        Group group4 = new Group();
        group4.getChildren().add(ellipse);
        Scene scene4 = new Scene(group4,800,600);
        
        stage4.setScene(scene4);
        stage4.show();
	}
	
	
	
	//POLYGON
	public void switchToSetPolygon(ActionEvent event) throws IOException {
		Parent root=FXMLLoader.load(getClass().getResource("SetPolygon.fxml"));
		stage = (Stage)((Node)event.getSource()).getScene().getWindow();
		scene = new Scene(root);
		stage.setScene(scene);
		stage.show();
	}
	
	public void switchToPolygon(ActionEvent event) throws IOException {
		
		PolygonDimension1=Double.parseDouble(PolDim1.getText());
		PolygonDimension2=Double.parseDouble(PolDim2.getText());
		PolygonDimension3=Double.parseDouble(PolDim3.getText());
		PolygonDimension4=Double.parseDouble(PolDim4.getText());
		PolygonDimension5=Double.parseDouble(PolDim5.getText());
		PolygonDimension6=Double.parseDouble(PolDim6.getText());
		
		Polygon polygon = new Polygon();
        polygon.getPoints().addAll(new Double[]{
        	PolygonDimension1, PolygonDimension2,
        	PolygonDimension3, PolygonDimension4,
        	PolygonDimension5, PolygonDimension6});
        polygon.setStroke(Color.YELLOW);
        polygon.setFill(Color.GREEN);
        
        
        Stage stage5 = new Stage();
        
        stage5.setTitle("Shape Chooser");
		Image icon = new Image(getClass().getResourceAsStream("icon.png"));
		stage5.getIcons().add(icon);
		
        Group group5 = new Group();
        group5.getChildren().add(polygon);
        Scene scene5 = new Scene(group5,800,600);
        
        stage5.setScene(scene5);
        stage5.show();
	}
	
	
	
	//RECTANGLE
	public void switchToSetRectangle(ActionEvent event) throws IOException {
		Parent root=FXMLLoader.load(getClass().getResource("SetRectangle.fxml"));
		stage = (Stage)((Node)event.getSource()).getScene().getWindow();
		scene = new Scene(root);
		stage.setScene(scene);
		stage.show();
	}
	
	public void switchToRectangle(ActionEvent event) throws IOException {
		
		RectangleDimension1=Double.parseDouble(RecDim1.getText());
		RectangleDimension2=Double.parseDouble(RecDim2.getText());
		RectangleDimension3=Double.parseDouble(RecDim3.getText());
		RectangleDimension4=Double.parseDouble(RecDim4.getText());
		RectangleDimension5=Double.parseDouble(RecDim5.getText());
		RectangleDimension6=Double.parseDouble(RecDim6.getText());
		
		Rectangle rec = new Rectangle();
        rec.setX(RectangleDimension1);
        rec.setY(RectangleDimension2);
        rec.setWidth(RectangleDimension3);
        rec.setHeight(RectangleDimension4);
        rec.setArcWidth(RectangleDimension5);
        rec.setArcHeight(RectangleDimension6);
        rec.setStroke(Color.BLACK);
        rec.setFill(Color.YELLOW);
 
        Stage stage6 = new Stage();
        
        stage6.setTitle("Shape Chooser");
		Image icon = new Image(getClass().getResourceAsStream("icon.png"));
		stage6.getIcons().add(icon);
		
        Group group6 = new Group();
        group6.getChildren().add(rec);
        Scene scene6 = new Scene(group6,800,600);
        
        stage6.setScene(scene6);
        stage6.show();
	}
	
	
	
	//LINE
	public void switchToSetLine(ActionEvent event) throws IOException {
		Parent root=FXMLLoader.load(getClass().getResource("SetLine.fxml"));
		stage = (Stage)((Node)event.getSource()).getScene().getWindow();
		scene = new Scene(root);
		stage.setScene(scene);
		stage.show();
	}
	
	public void switchToLine(ActionEvent event) throws IOException {
		LineDimension1=Double.parseDouble(LineDim1.getText());
		LineDimension2=Double.parseDouble(LineDim2.getText());
		LineDimension3=Double.parseDouble(LineDim3.getText());
		LineDimension4=Double.parseDouble(LineDim4.getText());
		
		Line line = new Line();
        line.setStartX(LineDimension1);
        line.setStartY(LineDimension2);
        line.setEndX(LineDimension3);
        line.setEndX(LineDimension4);
        line.setStroke(Color.RED);
        
        
        Stage stage7 = new Stage();
        
        stage7.setTitle("Shape Chooser");
		Image icon = new Image(getClass().getResourceAsStream("icon.png"));
		stage7.getIcons().add(icon);
		
        Group group7 = new Group();
        group7.getChildren().add(line);
        Scene scene7 = new Scene(group7,800,600);
        
        stage7.setScene(scene7);
        stage7.show();
	}
	
	
	
	//PATH
	public void switchToSetPath(ActionEvent event) throws IOException {
		Parent root=FXMLLoader.load(getClass().getResource("SetPath.fxml"));
		stage = (Stage)((Node)event.getSource()).getScene().getWindow();
		scene = new Scene(root);
		stage.setScene(scene);
		stage.show();
	}
	
	public void switchToPath(ActionEvent event) throws IOException {
		
		PathDimension1=Double.parseDouble(PathDim1.getText());
		PathDimension2=Double.parseDouble(PathDim2.getText());
		PathDimension3=Double.parseDouble(PathDim3.getText());
		PathDimension4=Double.parseDouble(PathDim4.getText());
		PathDimension5=Double.parseDouble(PathDim5.getText());
		PathDimension6=Double.parseDouble(PathDim6.getText());
		PathDimension7=Double.parseDouble(PathDim7.getText());
		PathDimension8=Double.parseDouble(PathDim8.getText());
		PathDimension9=Double.parseDouble(PathDim9.getText());
		PathDimension10=Double.parseDouble(PathDim10.getText());
		PathDimension11=Double.parseDouble(PathDim11.getText());
		PathDimension12=Double.parseDouble(PathDim12.getText());
		PathDimension13=Double.parseDouble(PathDim13.getText());

		
		Path path = new Path();

        MoveTo moveTo = new MoveTo();
        moveTo.setX(PathDimension1);
        moveTo.setY(PathDimension2);

        HLineTo hLineTo = new HLineTo();
        hLineTo.setX(PathDimension3);

        QuadCurveTo quadCurveTo = new QuadCurveTo();
        quadCurveTo.setX(PathDimension4);
        quadCurveTo.setY(PathDimension5);
        quadCurveTo.setControlX(PathDimension6);
        quadCurveTo.setControlY(PathDimension7);

        LineTo lineTo = new LineTo();
        lineTo.setX(PathDimension8);
        lineTo.setY(PathDimension9);

        ArcTo arcTo = new ArcTo();
        arcTo.setX(PathDimension10);
        arcTo.setY(PathDimension11);
        arcTo.setRadiusX(PathDimension12);
        arcTo.setRadiusY(PathDimension13);

        path.getElements().add(moveTo);
        path.getElements().add(hLineTo);
        path.getElements().add(quadCurveTo);
        path.getElements().add(lineTo);
        path.getElements().add(arcTo);
        
        
        Stage stage8 = new Stage();
        
        stage8.setTitle("Shape Chooser");
		Image icon = new Image(getClass().getResourceAsStream("icon.png"));
		stage8.getIcons().add(icon);
		
        Group group8 = new Group();
        group8.getChildren().add(path);
        Scene scene8 = new Scene(group8,800,600);
        
        stage8.setScene(scene8);
        stage8.show();
	}
}
