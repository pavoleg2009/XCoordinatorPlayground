//
//  LandingViewModel.swift
//  XCoordinatorPlayground
//
//  Created by Oleg Pavlichenkov on 10/05/2019.
//  Copyright © 2019 Oleg Pavlichenkov. All rights reserved.
//

import Foundation
import Action
import XCoordinator

final class LoadingViewModel {
    
    private let router: AnyRouter<AppRoute>
    
    private(set) lazy var authTrigger: InputSubject<Void> = authAction.inputs
    
    private lazy var authAction = CocoaAction { [unowned self] in
        self.router.rx.trigger(.auth)
    }
    
    private(set) lazy var mainTrigger: InputSubject<Void> = mainAction.inputs
    
    private lazy var mainAction = CocoaAction { [unowned self] in
        self.router.rx.trigger(.main)
    }
    
    init(router: AnyRouter<AppRoute>) {
        self.router = router
    }
    
}

