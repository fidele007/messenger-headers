/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBListTTIListener <NSObject>
@required
-(void)startTTI;
-(void)cancelTTI;
-(void)cancelTrackingAllOngoingAsyncActions;
-(void)endExpectingSectionComponentAsyncStartupActions;
-(void)didInitializeSectionComponentWithAsyncStartupActionWithUUID:(id)arg1 loggableName:(id)arg2;
-(void)didFinishLoadingSectionComponentWithAsyncStartupActionWithUUID:(id)arg1;
-(void)didFailLoadingSectionComponentWithAsyncStartupActionWithUUID:(id)arg1;
-(void)didEndUpdateDataSourceWithAsyncActionUUIDSet:(id)arg1;
-(void)didCancelOngoingAsyncActionWithUUID:(id)arg1;

@end

