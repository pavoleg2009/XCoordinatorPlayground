//
//  RootTransition.swift
//  XCoordinatorPlayground
//
//  Created by Oleg Pavlichenkov on 11/05/2019.
//  Copyright © 2019 Oleg Pavlichenkov. All rights reserved.
//

import Foundation
import XCoordinator

public typealias RootTransition = Transition<UIViewController>

extension Transition where RootViewController: UIViewController {
    
    static func setRoot(_ presentable: Presentable, animation: Animation? = nil) -> RootTransition {
        
        return RootTransition(presentables: [presentable],
                              animationInUse: animation?.presentationAnimation) { rootViewController, options, completion in
                                
        // TODO: create extension
        if let window = rootViewController.view?.window,
            let vc = presentable.viewController {
            
            window.rootViewController = vc
            presentable.presented(from: rootViewController)
            completion?()
            
            }
                                
        }
        
    }
    
}
