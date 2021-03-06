/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNGroupsRoomNUXViewControllerDelegate.h>

@class MNGroupsRoomNUXNavigationHandlerInjector, MNNavigationController, NSString;

@interface MNGroupsRoomNUXNavigationHandler : NSObject <FBClassInjectable, MNGroupsRoomNUXViewControllerDelegate> {

	MNGroupsRoomNUXNavigationHandlerInjector* _injector;
	MNNavigationController* _presentedNavController;
	/*^block*/id _dismissalCallback;
	BOOL _isDismissing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)_dismissNUX;
-(void)_presentNUXControllerWithDismissalCallback:(/*^block*/id)arg1 ;
-(void)roomNUXViewControllerDidTapClose:(id)arg1 ;
-(void)presentGroupsRoomNUXIfNeededWithDismissalCallback:(/*^block*/id)arg1 ;
@end

