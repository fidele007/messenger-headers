/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/SFSafariViewControllerDelegate.h>

@protocol FBSafariBasedURLRequestControllerDelegate;
@class SFSafariViewController, UIViewController, NSURL, NSString;

@interface FBSafariBasedURLRequestController : NSObject <SFSafariViewControllerDelegate> {

	SFSafariViewController* _safariViewController;
	UIViewController* _containerViewController;
	NSURL* _requestURL;
	id<FBSafariBasedURLRequestControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSafariBasedURLRequestControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContainerViewController:(id)arg1 requestURL:(id)arg2 ;
-(void)setDelegate:(id<FBSafariBasedURLRequestControllerDelegate>)arg1 ;
-(id<FBSafariBasedURLRequestControllerDelegate>)delegate;
-(void)startRequest;
-(void)safariViewController:(id)arg1 didCompleteInitialLoad:(BOOL)arg2 ;
@end

