/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComponentControllerWorkingRangeListening <FBFeedAdsComponentControllerWorkingRangeListening>
@optional
-(void)componentEnteredWorkingRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2;
-(void)componentExitedWorkingRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2;
-(void)componentEnteredVisibleRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2;
-(void)componentExitedVisibleRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2;
-(void)componentEnteredFocusedRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 previousTransitions:(id)arg3;
-(void)componentExitedFocusedRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 previousTransitions:(id)arg3;
-(void)componentEnteredFullImpressionRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2;
-(void)componentExitedFullImpressionRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2;

@end

