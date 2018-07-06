//
//  ViewController.swift
//  Project_openCV
//
//  Created by sawanmind on 12/06/18.
//  Copyright © 2018 Genisys. All rights reserved.
//

import UIKit


class ViewController: UIViewController, OCVVideoCameraDelegate {
  
    func processImage(_ image: OCVMat) {
        print(image)
    }
    
   
    
    
    var cameraView : UIImageView = {
        let instance = UIImageView()
        instance.contentMode = .scaleToFill
        return instance
    }()
    
    var videoCamera : OCVVideoCamera!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        view.addSubview(cameraView)
        cameraView.frame = view.frame
        setupCamera()
        
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        startCapture()
    }
    
    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        stopCapture()
    }
    
    func startCapture () {
        videoCamera.start()
    }
    
    func stopCapture () {
        videoCamera.stop()
    }
    
    
    private func setupCamera () {
        videoCamera = OCVVideoCamera(parentView: cameraView)
        videoCamera.defaultAVCaptureDevicePosition = .front
        videoCamera.defaultAVCaptureSessionPreset = AVCaptureSession.Preset.high.rawValue
        videoCamera.defaultAVCaptureVideoOrientation = .portrait
        videoCamera.defaultFPS = 30
        videoCamera.grayscaleMode = false
        videoCamera.delegate = self
        videoCamera.grayscaleMode = true
    }
    

}
