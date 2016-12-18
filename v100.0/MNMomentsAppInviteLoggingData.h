/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNMomentsAppInviteLoggingData : FBValueObject <NSCopying, NSCoding> {

	BOOL _hasInstalledMoments;
	BOOL _isPhotoRequest;
	NSString* _shareableFBID;

}

@property (nonatomic,copy,readonly) NSString * shareableFBID;              //@synthesize shareableFBID=_shareableFBID - In the implementation block
@property (nonatomic,readonly) BOOL hasInstalledMoments;                   //@synthesize hasInstalledMoments=_hasInstalledMoments - In the implementation block
@property (nonatomic,readonly) BOOL isPhotoRequest;                        //@synthesize isPhotoRequest=_isPhotoRequest - In the implementation block
-(BOOL)hasInstalledMoments;
-(id)initWithShareableFBID:(id)arg1 hasInstalledMoments:(BOOL)arg2 isPhotoRequest:(BOOL)arg3 ;
-(NSString *)shareableFBID;
-(BOOL)isPhotoRequest;
@end
