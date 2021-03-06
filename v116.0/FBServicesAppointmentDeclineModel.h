/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNNativeComponentFlowBookingRequestFragment;
@class FBUserSession, NSString;

@interface FBServicesAppointmentDeclineModel : NSObject {

	FBUserSession* _session;
	id<MNNativeComponentFlowBookingRequestFragment> _bookingRequest;
	NSString* _nameTestGroup;

}
+(id)fb_eventName;
-(id)initWithSession:(id)arg1 bookingRequest:(id)arg2 nameTestGroup:(id)arg3 ;
-(id)bookingRequest;
-(id)nameTestGroup;
-(void)declineWithMessageText:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fb_declineWithStatusUpdateData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)session;
@end

