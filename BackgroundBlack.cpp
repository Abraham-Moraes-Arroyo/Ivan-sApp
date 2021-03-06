// incase Ivan wants the app in black
//
//  ContentView.swift
//  Shared
//
//  Created by Abraham Morales Arroyo on 2/1/22.
//

import SwiftUI


struct ContentView: View {
 
    var body: some View {
        ZStack{
            Color(.black).edgesIgnoringSafeArea(.all)
            Text("Angel's App")
                .font(.largeTitle)
            .padding()
        

//
//        Text("Build 1.0.0")
//            .font(.body)
//            .foregroundColor(Color.black)
//        // here is where I am going to have
//        // the photo for Ivan's cash APPImage(/*@START_MENU_TOKEN@*/"Image Name"/*@END_MENU_TOKEN@*/)
        Image("cashAppIvan")
            .resizable()
            .aspectRatio(contentMode: .fit)
//        .padding()
    }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
        
    }
    
}
