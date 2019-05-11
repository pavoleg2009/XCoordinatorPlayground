//
//  LoginViewModel.swift
//  XCoordinatorPlayground
//
//  Created by Oleg Pavlichenkov on 10/05/2019.
//  Copyright © 2019 Oleg Pavlichenkov. All rights reserved.
//

import Foundation
import Action
import XCoordinator

final class SignInViewModel {
    
    private let router: AnyRouter<AuthRoute>
    
    private(set) lazy var loginTrigger: InputSubject<Void> = loginAction.inputs
    
    private lazy var loginAction = CocoaAction { [unowned self] in
        self.router.rx.trigger(.signInSuccess)
    }
    
    init(router: AnyRouter<AuthRoute>) {
        self.router = router
    }
    
}
