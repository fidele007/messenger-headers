/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBNativeAdInvalidationController : NSObject
+(BOOL)isVideoNativeAdObject:(id)arg1 ;
+(BOOL)isPhotoNativeAdObject:(id)arg1 ;
+(BOOL)isMultiShareNativeAdObject:(id)arg1 ;
+(BOOL)isShareNativeAdObject:(id)arg1 ;
+(void)logNativeAdInvalidationWithReason:(id)arg1 blockID:(id)arg2 adID:(id)arg3 analyticsInfo:(id)arg4 ;
+(BOOL)isValidNativeAdObject:(id)arg1 ;
+(BOOL)isValidNativeAdSet:(id)arg1 ;
+(void)logNativeAdSetInvalidationWithReason:(id)arg1 adID:(id)arg2 analyticsInfo:(id)arg3 ;
@end

