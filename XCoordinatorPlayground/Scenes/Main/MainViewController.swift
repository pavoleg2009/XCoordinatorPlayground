//
//  MainViewController.swift
//  XCoordinatorPlayground
//
//  Created by Oleg Pavlichenkov on 10/05/2019.
//  Copyright © 2019 Oleg Pavlichenkov. All rights reserved.
//

import RxCocoa
import RxSwift
import UIKit

class MainViewController: UIViewController, BindableType {

    @IBOutlet weak var logOutButton: UIButton!
    
    var viewModel: MainViewModel!
    private let disposeBag = DisposeBag()
    
    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }
    
    func bindViewModel() {
        logOutButton.rx.tap
            .bind(to: viewModel.logoutTrigger)
            .disposed(by: disposeBag)
    }
    
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        
        var rootVC: UIViewController = self
        
        while let vc = rootVC.parent {
            rootVC = vc
        }
        
        if let navVC = rootVC as? UINavigationController {
            print(navVC.children.count)
        }
        
        
    }
}
