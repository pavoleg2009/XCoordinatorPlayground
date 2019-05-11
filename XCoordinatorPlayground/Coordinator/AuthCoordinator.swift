//
//  AuthCoordinator.swift
//  XCoordinatorPlayground
//
//  Created by Oleg Pavlichenkov on 10/05/2019.
//  Copyright © 2019 Oleg Pavlichenkov. All rights reserved.
//

import Foundation
import XCoordinator

enum AuthRoute: Route {
    case landing
    case signIn
    case signUp
    case signInSuccess
}

class AuthCoordinator: NavigationCoordinator<AuthRoute> {
    
    init() {
        super.init(initialRoute: .landing)
        
    }
    
    override func prepareTransition(for route: AuthRoute) -> NavigationTransition {
        switch route {
        case .landing:
            let viewController = LandingViewController.instantiateFromNib()
            let viewModel = LandingViewModel(router: anyRouter)
            viewController.bind(to: viewModel)
            return .push(viewController)
        case .signIn:
            let viewController = SignInViewController.instantiateFromNib()
            let viewModel = SignInViewModel(router: anyRouter)
            viewController.bind(to: viewModel)
            return .push(viewController)
        case .signUp:
            return .none()
        case .signInSuccess:
            return .dismiss() //.none() // How to go to main
        }
    }
}
