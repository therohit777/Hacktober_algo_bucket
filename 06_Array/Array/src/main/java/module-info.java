module com.example.array {
    requires javafx.controls;
    requires javafx.fxml;


    opens com.example.array to javafx.fxml;
    exports com.example.array;
}