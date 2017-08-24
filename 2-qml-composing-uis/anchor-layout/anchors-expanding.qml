import QtQuick 2.0

Rectangle {
    width: 300; height: 50
    color: "black"

    TextInput {
        id: textInput
        text: "Text input"; color: "white"
        font.family: "Helvetica"; font.pixelSize: 32
        focus: true
        anchors.left: parent.left
        anchors.leftMargin: 4
        anchors.verticalCenter: parent.verticalCenter
    }

    Rectangle {
        color: "red"
        anchors.left: textInput.right
        anchors.right: parent.right
        anchors.verticalCenter: parent.verticalCenter
        height: 8
    }
}
