/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>
#import <Messenger/MNMessengerCodeViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider;
@class MNAddContactViewController, FBLazyCreator, MNNavigationCoordinator, MNThreadNavigationCoordinator, FBAnalytics, NSString;

@interface MNAddContactController : NSObject <ABPeoplePickerNavigationControllerDelegate, MNMessengerCodeViewControllerDelegate, FBClassProvidable> {

	id<FBProvider> _addContactViewControllerProvider;
	MNAddContactViewController* _addContactViewController;
	FBLazyCreator* _messengerCodeViewControllerCreator;
	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_initializeMessengerCodeViewControllerWithProvider:(id)arg1 ;
-(id)initWithAddContactViewControllerProvider:(id)arg1 messengerCodeViewControllerProvider:(id)arg2 navigationCoordinator:(id)arg3 threadNavigationCoordinator:(id)arg4 analytics:(id)arg5 ;
-(void)_presentContactAdditionOptionsActionSheet;
-(void)_presentAddContactViewControllerWithPhoneNumberString:(id)arg1 ;
-(void)_presentAddContactViewController;
-(void)_presentAddressBookPeoplePicker;
-(void)_presentMessengerCodeViewController;
-(void)messengerCodeViewControllerDidTapCancel:(id)arg1 ;
-(void)messengerCodeViewController:(id)arg1 didDecodeUserId:(id)arg2 ;
-(void)presentAddContactFlow;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
@end
