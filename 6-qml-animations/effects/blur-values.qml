import QtQuick 2.0

Item {
    width: 1300
    height: 200

    Rectangle {
        x: 0; y: 0; width: 400; height: 200
        color: "lightblue"
        Text {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.baseline: parent.verticalCenter
            text: "Qt Quick"; font.pixelSize: 64
            effect: Blur { blurRadius: 1 }
        }
        Text {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 10
            text: "blurRadius: 1"; font.pixelSize: 32
            color: "darkBlue"
        }
    }

    Rectangle {
        x: 450; y: 0; width: 400; height: 200
        color: "lightblue"
        Text {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.baseline: parent.verticalCenter
            text: "Qt Quick"; font.pixelSize: 64
            effect: Blur { blurRadius: 3 }
        }
        Text {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 10
            text: "blurRadius: 3"; font.pixelSize: 32
            color: "darkBlue"
        }
    }

    Rectangle {
        x: 900; y: 0; width: 400; height: 200
        color: "lightblue"
        Text {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.baseline: parent.verticalCenter
            text: "Qt Quick"; font.pixelSize: 64
            effect: Blur { blurRadius: 5 }
        }
        Text {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 10
            text: "blurRadius: 5"; font.pixelSize: 32
            color: "darkBlue"
        }
    }
}
