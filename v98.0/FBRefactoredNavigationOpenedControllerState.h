/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, UIViewController, FBPopoverInfo;

@interface FBRefactoredNavigationOpenedControllerState : NSObject {

	NSURL* _openedURL;
	UIViewController* _viewController;
	id _containerController;
	/*^block*/id _onClosedBlock;
	unsigned long long _presentationMethod;
	unsigned long long _presentationOptions;
	FBPopoverInfo* _popoverInfo;
	UIViewController* _presenter;

}

@property (nonatomic,copy,readonly) NSURL * openedURL;                                //@synthesize openedURL=_openedURL - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,__weak,readonly) id containerController;                         //@synthesize containerController=_containerController - In the implementation block
@property (nonatomic,copy,readonly) id onClosedBlock;                                 //@synthesize onClosedBlock=_onClosedBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationMethod;                 //@synthesize presentationMethod=_presentationMethod - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationOptions;                //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (nonatomic,readonly) FBPopoverInfo * popoverInfo;                           //@synthesize popoverInfo=_popoverInfo - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presenter;                   //@synthesize presenter=_presenter - In the implementation block
-(id)onClosedBlock;
-(FBPopoverInfo *)popoverInfo;
-(unsigned long long)presentationMethod;
-(id)containerController;
-(id)initWithOpenedURL:(id)arg1 viewController:(id)arg2 presentationMethod:(unsigned long long)arg3 presentationOptions:(unsigned long long)arg4 popoverInfo:(id)arg5 presenter:(id)arg6 containerController:(id)arg7 onClosedBlock:(/*^block*/id)arg8 ;
-(NSURL *)openedURL;
-(void)dealloc;
-(id)description;
-(UIViewController *)viewController;
-(unsigned long long)presentationOptions;
-(UIViewController *)presenter;
@end

