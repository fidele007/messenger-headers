/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNMessageLiveLocationTrayMapViewDelegate.h>

@protocol MNMessageLiveLocationTrayMapViewControllerDelegate;
@class FBUserSession, MNMessageLiveLocationTrayMapView, NSString;

@interface MNMessageLiveLocationTrayMapViewController : UIViewController <MNMessageLiveLocationTrayMapViewDelegate> {

	FBUserSession* _session;
	MNMessageLiveLocationTrayMapView* _trayMapView;
	id<MNMessageLiveLocationTrayMapViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMessageLiveLocationTrayMapViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageLiveLocationTrayMapView:(id)arg1 didTapToSendLiveLocation:(id)arg2 ;
-(void)messageLiveLocationTrayMapViewDidTapToStopSendingLiveLocation:(id)arg1 ;
-(id)messageLiveLocationTrayMapView:(id)arg1 profileViewForViewModel:(id)arg2 ;
-(id)initWithSession:(id)arg1 initialLocation:(id)arg2 ;
-(void)setDelegate:(id<MNMessageLiveLocationTrayMapViewControllerDelegate>)arg1 ;
-(id<MNMessageLiveLocationTrayMapViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

