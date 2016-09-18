/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager, MNModalPresentation;
@class FBOmnistore, FBMobileConfigContextManager, FBOmnistoreCollection, EKEventStore;

@interface MNCalendarStore : NSObject {

	FBOmnistore* _omnistore;
	id<MNAuthenticationManager> _authManager;
	FBMobileConfigContextManager* _configManager;
	id<MNModalPresentation> _navigationCoordinator;
	FBOmnistoreCollection* _collection;
	EKEventStore* _eventStore;
	BOOL _systemCalendarHasChangesToSync;

}
-(id)initWithOmnistore:(id)arg1 authManager:(id)arg2 configManager:(id)arg3 navigationCoordinator:(id)arg4 ;
-(void)presentPromptIfNeededAndAddCalendarEventToDefaultCalendar:(id)arg1 ;
-(void)_tearDownListeners;
-(void)_setUpListeners;
-(void)_startIfNeeded;
-(id)_fetchSystemCalendarEventsIfAvailableWithLowerBound:(id)arg1 upperBound:(id)arg2 ;
-(void)_saveRemoteCalendarEvents:(id)arg1 ;
-(void)_deleteRemoteEventsNotInEventArray:(id)arg1 ;
-(void)_requestAccessAndSaveEventToSystemCalendar:(id)arg1 ;
-(void)_systemCalendarEventsChanged;
-(void)_saveEventToSystemCalendar:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(BOOL)sync;
@end
