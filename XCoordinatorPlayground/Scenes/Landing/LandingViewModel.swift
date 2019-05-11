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

final class LandingViewModel {
    
    private let router: AnyRouter<AuthRoute>
    
    private(set) lazy var signInTrigger: InputSubject<Void> = signInAction.inputs
    
    private lazy var signInAction = CocoaAction { [unowned self] in
        self.router.rx.trigger(.signIn)
    }
    
    private(set) lazy var signUpTrigger: InputSubject<Void> = signUpAction.inputs
    
    private lazy var signUpAction = CocoaAction { [unowned self] in
        self.router.rx.trigger(.signUp)
    }
    
    init(router: AnyRouter<AuthRoute>) {
        self.router = router
    }
    
}

