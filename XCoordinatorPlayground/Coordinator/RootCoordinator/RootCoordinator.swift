//
//  RootCoordinator.swift
//  XCoordinatorPlayground
//
//  Created by Oleg Pavlichenkov on 11/05/2019.
//  Copyright © 2019 Oleg Pavlichenkov. All rights reserved.
//

import Foundation
import XCoordinator

open class RootCoordinator<RouteType: Route>: BaseCoordinator<RouteType, RootTransition> {
    
    public override init(initialRoute: RouteType? = nil) {
        super.init(initialRoute: initialRoute)
    }
    
    public init(root: Presentable) {
        super.init(initialTransition: .setRoot(root))
    }
    
    open override func generateRootViewController() -> UIViewController {
        let viewController = super.generateRootViewController()
        
        return viewController
    }
}
