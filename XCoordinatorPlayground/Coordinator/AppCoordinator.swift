//
//  AppCoordinator.swift
//  XCoordinatorPlayground
//
//  Created by Oleg Pavlichenkov on 10/05/2019.
//  Copyright © 2019 Oleg Pavlichenkov. All rights reserved.
//

import Foundation
import XCoordinator

enum AppRoute: Route {
    case loading
    case auth
    case main
}

class AppCoordinator: RootCoordinator<AppRoute> {
    
    init() {
        super.init(initialRoute: .loading)
    }
    
    private var authCoordinator: Presentable?
    
    override func prepareTransition(for route: AppRoute) -> ViewTransition {
        switch route {
        case .loading:
            let viewController = LoadingViewController.instantiateFromNib()
            let viewModel = LoadingViewModel(router: anyRouter)
            viewController.bind(to: viewModel)
            return .setRoot(viewController)
        case .auth:
            let authCoordinator = AuthCoordinator()
            self.authCoordinator = authCoordinator
            return .setRoot(authCoordinator)
        case .main:
            let viewController = MainViewController.instantiateFromNib()
            let viewModel = MainViewModel(router: anyRouter)
            viewController.bind(to: viewModel)
            return .setRoot(viewController)
        }
    }
}
