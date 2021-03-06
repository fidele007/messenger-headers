/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMediaUploadConfig;

@interface FBMediaSegmentStreamConfig : FBValueObject <NSCopying> {

	FBMediaUploadConfig* _uploadConfig;
	long long _numberOfSegments;

}

@property (nonatomic,copy,readonly) FBMediaUploadConfig * uploadConfig;              //@synthesize uploadConfig=_uploadConfig - In the implementation block
@property (nonatomic,readonly) long long numberOfSegments;                           //@synthesize numberOfSegments=_numberOfSegments - In the implementation block
-(id)initWithUploadConfig:(id)arg1 numberOfSegments:(long long)arg2 ;
-(FBMediaUploadConfig *)uploadConfig;
-(long long)numberOfSegments;
@end

