import QtQuick 2.0

Rectangle {
    width: label.width + 32
    height: label.height + 2
    radius: 4
    color: "#d0d0d0"
    opacity: enabled ? 1.0 : 0.5

    Text {
        id: label
        font.family: "Helvetica"
        anchors.centerIn: parent
        text: "Emertxe"
        font.pixelSize: 26
    }

    MouseArea {
        anchors.fill: parent
        hoverEnabled: parent.enabled
        onClicked: if (parent.enabled) parent.clicked();
        onEntered: if (parent.enabled) parent.color = "#c0c0c0"
        onExited: if (parent.enabled) parent.color = "#d0d0d0"
        onPressed: if (parent.enabled) parent.color = "#a0a0a0"
        onReleased: if (parent.enabled) parent.color = "#c0c0c0"
    }

    property bool enabled: true
    signal clicked()
}
