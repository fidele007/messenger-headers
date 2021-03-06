/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNBookingRequestsDataFetcherDelegate;
@class FBUserSession;

@interface MNBookingRequestsDataFetcher : NSObject {

	FBUserSession* _session;
	id<MNBookingRequestsDataFetcherDelegate> _delegate;

}
-(id)initWithSession:(id)arg1 delegate:(id)arg2 ;
-(void)fetchBookingRequestsCountWithPageId:(id)arg1 ;
-(void)fetchBookingRequestsDetailWithBookingViewerContext:(id)arg1 statusFilter:(id)arg2 numberOfBookingRequest:(id)arg3 ;
-(void)_fetchDetailSucceededWithData:(id)arg1 ;
-(void)_fetchFailedWithError:(id)arg1 ;
-(void)_fetchCountSucceededWithData:(id)arg1 ;
-(void)_fetchBookingRequestsDetailWithUser:(id)arg1 byPage:(id)arg2 statusFilter:(id)arg3 ;
-(void)_fetchBookingRequestsDetailWithPageId:(id)arg1 bookingTime:(id)arg2 first:(id)arg3 statusFilter:(id)arg4 afterCursor:(id)arg5 orderby:(id)arg6 ;
@end

