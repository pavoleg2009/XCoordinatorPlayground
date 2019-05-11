//
//  AppDelegate.swift
//  XCoordinatorPlayground
//
//  Created by Oleg Pavlichenkov on 10/05/2019.
//  Copyright © 2019 Oleg Pavlichenkov. All rights reserved.
//

import UIKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    let window: UIWindow! = UIWindow()
    
    /// Creates an AnyRouter object from the given router to abstract from concrete implementations
    /// while maintaining information necessary to fulfill the Router protocol.
    
    let router = AppCoordinator().anyRouter
    
    func application(_ application: UIApplication,
                     didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        router.setRoot(for: window)
        return true
    }


}

