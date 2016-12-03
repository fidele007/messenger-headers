/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIPopoverController.h>

@protocol UIPopoverControllerDelegate;
@class FBModalViewCoordinator, FBDelegateForwarder;

@interface FBUIPopoverController : UIPopoverController {

	FBModalViewCoordinator* _coordinator;
	FBDelegateForwarder* _forwarder;
	BOOL _inAllowedEntryPoint;
	id<UIPopoverControllerDelegate> _mainDelegate;

}

@property (assign,nonatomic,__weak) id<UIPopoverControllerDelegate> mainDelegate;              //@synthesize mainDelegate=_mainDelegate - In the implementation block
-(void)_resetForwarder;
-(id)initWithContentViewController:(id)arg1 coordinator:(id)arg2 ;
-(void)setMainDelegate:(id<UIPopoverControllerDelegate>)arg1 ;
-(id<UIPopoverControllerDelegate>)mainDelegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)presentPopoverFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(BOOL)arg3 ;
@end
