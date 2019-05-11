//
//  MainViewModel.swift
//  XCoordinatorPlayground
//
//  Created by Oleg Pavlichenkov on 10/05/2019.
//  Copyright © 2019 Oleg Pavlichenkov. All rights reserved.
//

import Action
import Foundation
import XCoordinator

final class MainViewModel {
    
    private let router: AnyRouter<AppRoute>
    
    private(set) lazy var logoutTrigger: InputSubject<Void> = logoutAction.inputs
    
    private lazy var logoutAction = CocoaAction { [unowned self] in
        self.router.rx.trigger(.auth)
    }
    
    init(router: AnyRouter<AppRoute>) {
        self.router = router
    }
}
