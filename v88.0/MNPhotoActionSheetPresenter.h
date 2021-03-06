/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNAlertControllerPresenting, MNPhotoActionSheetPresenterDelegate;
@class NSString;

@interface MNPhotoActionSheetPresenter : NSObject <UIActionSheetDelegate, FBClassProvidable> {

	id<MNAlertControllerPresenting> _alertControllerPresenter;
	id<MNPhotoActionSheetPresenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPhotoActionSheetPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_showAlertController:(id)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 ;
-(void)showPhotoActionSheetInView:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)setDelegate:(id<MNPhotoActionSheetPresenterDelegate>)arg1 ;
-(id<MNPhotoActionSheetPresenterDelegate>)delegate;
@end

