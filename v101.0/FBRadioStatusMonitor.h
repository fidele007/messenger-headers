/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBRadioStatusMonitor : NSObject {

	unique_ptr<proxygen::battery::RadioStatusObserver, std::__1::default_delete<proxygen::battery::RadioStatusObserver> >* _radioStatusObserver;
	EventBase* _eventBase;

}

@property (nonatomic,readonly) RadioStatusObserver* radioStatusObserver; 
+(id)getSharedRadioStatusMonitor;
+(id)createSharedRadioStatusMonitorWithUseLigerEvb:(BOOL)arg1 ;
-(map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > >*)getRadioData;
-(void)_setEventBase:(BOOL)arg1 ;
-(id)initPrivateWithUseLigerEvb:(BOOL)arg1 ;
-(RadioStatusObserver*)radioStatusObserver;
-(id)init;
@end

