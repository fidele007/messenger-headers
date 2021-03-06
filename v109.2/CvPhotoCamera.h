/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CvAbstractCamera.h>

@protocol CvPhotoCameraDelegate;
@class AVCaptureStillImageOutput;

@interface CvPhotoCamera : CvAbstractCamera {

	AVCaptureStillImageOutput* stillImageOutput;
	id<CvPhotoCameraDelegate> delegate;

}

@property (nonatomic,retain) AVCaptureStillImageOutput * stillImageOutput; 
@property (assign,nonatomic) id<CvPhotoCameraDelegate> delegate; 
-(void)createStillImageOutput;
-(void)createCaptureOutput;
-(void)createCustomVideoPreview;
-(void)setDelegate:(id<CvPhotoCameraDelegate>)arg1 ;
-(id<CvPhotoCameraDelegate>)delegate;
-(void)stop;
-(void)takePicture;
-(void)setStillImageOutput:(AVCaptureStillImageOutput *)arg1 ;
-(AVCaptureStillImageOutput *)stillImageOutput;
@end

