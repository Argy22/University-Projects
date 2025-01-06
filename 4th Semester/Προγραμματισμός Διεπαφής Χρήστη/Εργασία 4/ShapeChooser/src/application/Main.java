package application;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.image.Image;
import javafx.stage.Stage;

public class Main extends Application {
		
		@Override
		public void start(Stage stage){
			try {
				
				Parent root=FXMLLoader.load(getClass().getResource("HomeScene.fxml"));
				Scene scene1 = new Scene(root);
				stage.setScene(scene1);
				stage.setTitle("Shape Chooser");
				Image icon = new Image(getClass().getResourceAsStream("icon.png"));
				stage.getIcons().add(icon);
				stage.show();

			} catch(Exception e) {
				e.printStackTrace();
			}
		}
			
		public static void main(String[] args) {
			launch(args);
		}

	}