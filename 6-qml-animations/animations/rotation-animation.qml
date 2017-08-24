import QtQuick 2.0

Item {
    width: 100; height: 100

    Image {
        id: ball
        source: "../images/ball.png"
        anchors.centerIn: parent
        smooth: true

        RotationAnimation on rotation {
            from: 45; to: 315
            direction: RotationAnimation.Shortest
            duration: 1000
        }
    }
}
