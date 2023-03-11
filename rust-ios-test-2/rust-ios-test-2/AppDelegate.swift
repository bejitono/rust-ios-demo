//
//  AppDelegate.swift
//  rust-ios-test-2
//
//  Created by Stefano De Micheli on 3/1/23.
//

import UIKit
import SwiftUI

@main
class AppDelegate: UIResponder, UIApplicationDelegate {

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        
        let todolist = TodoList()
        try? todolist.addItem(todo: "hello")
        try? todolist.addItem(todo: "bye")
        try? todolist.addItem(todo: "hello again")
        let items = todolist.getItems()
        let itemsCopy = todolist.getItemsCopy2()
        let lastItem = try? todolist.getLastCopy2()
        print("items: ", items)
        print("items copy: ", itemsCopy)
        print("last item: ", lastItem)
        
        print(todolist.hello())
        
        return true
    }

    // MARK: UISceneSession Lifecycle

    func application(_ application: UIApplication, configurationForConnecting connectingSceneSession: UISceneSession, options: UIScene.ConnectionOptions) -> UISceneConfiguration {
        // Called when a new scene session is being created.
        // Use this method to select a configuration to create the new scene with.
        return UISceneConfiguration(name: "Default Configuration", sessionRole: connectingSceneSession.role)
    }

    func application(_ application: UIApplication, didDiscardSceneSessions sceneSessions: Set<UISceneSession>) {
        // Called when the user discards a scene session.
        // If any sessions were discarded while the application was not running, this will be called shortly after application:didFinishLaunchingWithOptions.
        // Use this method to release any resources that were specific to the discarded scenes, as they will not return.
    }


}

