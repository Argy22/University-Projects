/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/javafx/FXMain.java to edit this template
 */
package shapes;

import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.paint.Color;
import javafx.stage.Stage;
import javafx.scene.shape.*;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javax.swing.*;
import java.awt.event.*;
import javafx.fxml.FXML;

/**
 *
 * @author Giannis
 */

public class Shapes extends Application {

    @Override
    public void start(Stage primaryStage) {
        
        Group root = new Group();

//Shapes

//Arc
        Arc arc = new Arc();
        arc.setCenterX(270.0f);
        arc.setCenterY(50.0f);
        arc.setRadiusX(25.0f);
        arc.setRadiusY(25.0f);
        arc.setStartAngle(45.0f);
        arc.setLength(270.0f);
        arc.setType(ArcType.ROUND);
        arc.setStroke(Color.WHITE);
        arc.setFill(Color.PINK);

//Cubic Curve        
        CubicCurve cubic = new CubicCurve();
        cubic.setStartX(0.0f);
        cubic.setStartY(50.0f);
        cubic.setControlX1(25.0f);
        cubic.setControlY1(0.0f);
        cubic.setControlX2(75.0f);
        cubic.setControlY2(100.0f);
        cubic.setEndX(120.0f);
        cubic.setEndY(70.0f);
        cubic.setStroke(Color.WHITE);
        cubic.setFill(Color.ORANGE);

//Cylinder
        Cylinder cylinder = new Cylinder();
        cylinder.setHeight(180.0f);
        cylinder.setRadius(220.0f); 
        
//Ellipse        
        Ellipse ellipse = new Ellipse(); {
        ellipse.setCenterX(150.0f);
        ellipse.setCenterY(200.0f);
        ellipse.setRadiusX(50.0f);
        ellipse.setRadiusY(25.0f);
        ellipse.setStroke(Color.WHITE);
        ellipse.setFill(Color.BLUE);
 
//Line       
        Line line = new Line();
        line.setStartX(1000);
        line.setStartY(2000);
        line.setEndX(200);
        line.setEndX(200);
        line.setStroke(Color.RED);
        
//Path
        Path path = new Path();

        MoveTo moveTo = new MoveTo();
        moveTo.setX(0.0f);
        moveTo.setY(0.0f);

        HLineTo hLineTo = new HLineTo();
        hLineTo.setX(70.0f);

        QuadCurveTo quadCurveTo = new QuadCurveTo();
        quadCurveTo.setX(120.0f);
        quadCurveTo.setY(60.0f);
        quadCurveTo.setControlX(100.0f);
        quadCurveTo.setControlY(0.0f);

        LineTo lineTo = new LineTo();
        lineTo.setX(175.0f);
        lineTo.setY(55.0f);

        ArcTo arcTo = new ArcTo();
        arcTo.setX(50.0f); //Define the X coordinate to arc to
        arcTo.setY(50.0f); //Define the Y coordinate to arc to
        arcTo.setRadiusX(50.0f); //Define the horizontal radius to use for the arc
        arcTo.setRadiusY(50.0f); //Define the vertical radius to use for the arc

        path.getElements().add(moveTo);
        path.getElements().add(hLineTo);
        path.getElements().add(quadCurveTo);
        path.getElements().add(lineTo);
        path.getElements().add(arcTo);
        
//Polygon
        Polygon polygon = new Polygon();
        polygon.getPoints().addAll(new Double[]{
            0.0, 0.0,
            40.0, 20.0,
            20.0, 40.0});
        polygon.setStroke(Color.YELLOW);
        polygon.setFill(Color.GREEN);
        
//Rectangle
        Rectangle rec = new Rectangle();
        rec.setX(50);
        rec.setY(100);
        rec.setWidth(100);
        rec.setHeight(50);
        rec.setArcWidth(10);
        rec.setArcHeight(10);
        rec.setStroke(Color.BLACK);
        rec.setFill(Color.YELLOW);
        
        
        Scene scene = new Scene(root, 800, 600);
        root.getChildren().addAll(arc, cubic, cylinder, ellipse, line, path, polygon, rec );
        primaryStage.setTitle("Shape Chooser");
        primaryStage.setScene(scene);
        primaryStage.show();
    
    }
    }
    
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        launch(args);
    }

}
