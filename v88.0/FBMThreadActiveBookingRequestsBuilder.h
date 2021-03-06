/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBProfServicesBookingDataModel;

@interface FBMThreadActiveBookingRequestsBuilder : NSObject {

	unsigned long long _pendingRequestsCount;
	unsigned long long _confirmedRequestsCount;
	unsigned long long _requestedRequestsCount;
	FBProfServicesBookingDataModel* _pendingRequest;
	FBProfServicesBookingDataModel* _confirmedRequest;
	FBProfServicesBookingDataModel* _requestedRequest;

}
+(id)threadActiveBookingRequests;
+(id)threadActiveBookingRequestsFromExistingThreadActiveBookingRequests:(id)arg1 ;
-(id)withPendingRequestsCount:(unsigned long long)arg1 ;
-(id)withConfirmedRequestsCount:(unsigned long long)arg1 ;
-(id)withRequestedRequestsCount:(unsigned long long)arg1 ;
-(id)withPendingRequest:(id)arg1 ;
-(id)withConfirmedRequest:(id)arg1 ;
-(id)withRequestedRequest:(id)arg1 ;
-(id)build;
@end

