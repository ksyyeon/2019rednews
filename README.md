# 🧯 2019 RedNews
### 건물 내 위치에 따른 화재 대피경로 안내 어플리케이션
2019.07 ~ 2019.09 <br/>
팀 뿌셔뿌셔 <br/><br/>
🏅 교내 소프트웨어 경진대회 은상 <br/>
<a href="https://youtu.be/73DI8Q2asYk">👀 시연영상 보러가기</a>
## About the Project
레드뉴스는 사용자 주변에 건물 화재가 발생하면 푸시알림으로 빠르게 알려주고, 화제 건물 내의 사용자에게는 아두이노로 감지한 화제 발생지점과 연기농도에 따라서 안전한 대피구로 안내한다. <br/>
## Envrioment
* Android Studio
* Java
* Sketch (Arduino IDE)
* C
## Prerequite
* Google Maps Android API
## Description
* **Flow Chart** <br/>
<img src="https://user-images.githubusercontent.com/69140802/170871275-3eb80493-c40e-49fc-96b4-40690f38c0c9.png" width="400px"></img>
* **Hardware Function** <br/><br/>
<img src="https://user-images.githubusercontent.com/69140802/170871110-bd06650a-2b0d-450f-92ee-88c09db2bc8d.jpg" height="400px"></img> &nbsp; &nbsp; &nbsp; &nbsp; <img src="https://user-images.githubusercontent.com/69140802/170872773-7ef93010-3a8a-456e-a753-a1a91a10b94e.JPG" height="400px"></img> 
1. 화염불꽃 센서모듈로 화재 감지
2. 유해가스 센서모듈로 공기 중 CO 농도 감지
3. 블루투스 통신으로 안드로이드 모바일에 센서값 전송
* **Software Function** </br></br>
<img src="https://user-images.githubusercontent.com/69140802/170872636-1bd47df1-61e9-433f-bf8c-5f2ab07f6d23.png" height="400px"></img> &nbsp; <img src="https://user-images.githubusercontent.com/69140802/170871386-e0b95fff-128e-40e2-a60e-b80942b8ac52.png" height="400px"></img> &nbsp; <img src="https://user-images.githubusercontent.com/69140802/170872070-564d2dd5-b30c-4e2b-8bdc-1902011c2c2d.png" height="400px"></img>
0. 스플래쉬
1. 화재발생 푸시알림
2. 화재가 발생한 건물의 위치 Google Maps에 마킹 </br></br></br>
<img src="https://user-images.githubusercontent.com/69140802/170872114-b23989fb-9406-4df0-bf8e-45d1c5bd7377.png" height="400px"></img> &nbsp; <img src="https://user-images.githubusercontent.com/69140802/170872132-ca27d369-be1e-4150-b4e4-7376c8906531.png" height="400px"> &nbsp; <img src="https://user-images.githubusercontent.com/69140802/170872583-6af2ef27-6c7e-46c5-b4f2-fde4e201c7e6.png" height="400px"></br></br>
3. 사용자의 건물 내 층,위치에 따른 가장 안전한 대피경로 제공
4. 실시간 CO농도를 비교하여 비상구 사용가능여부 안내
5. 소화기 사용법 안내
## Files
`MainActivity.java`  아두이노 모듈값 수신 <br/><br/>
`MapActivity.java`  Google Map 화재 마커,반경찍기 <br/><br/>
`PopupActivity.java`  소화기 사용안내 팝업 <br/><br/>
`SplashAcitivity.java`  Splash 화면 <br/><br/>
`bluetoothservice.java`  Service를 이용한 블루투스 통신 <br/><br/>
`ExtendActivity`  실시간 가스 농도 비교 <br/><br/>
`FloorsActivity`  층 내부도에서 위치 선택 -> 대피로 안내 <br/><br/>
