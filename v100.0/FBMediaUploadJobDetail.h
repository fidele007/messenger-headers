/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBMediaUploadContentSource, FBMediaUploadConfig, NSString;

@interface FBMediaUploadJobDetail : FBValueObject <NSCopying, NSCoding> {

	FBMediaUploadContentSource* _contentSource;
	FBMediaUploadConfig* _config;
	NSString* _token;

}

@property (nonatomic,copy,readonly) FBMediaUploadContentSource * contentSource;              //@synthesize contentSource=_contentSource - In the implementation block
@property (nonatomic,copy,readonly) FBMediaUploadConfig * config;                            //@synthesize config=_config - In the implementation block
@property (nonatomic,copy,readonly) NSString * token;                                        //@synthesize token=_token - In the implementation block
-(id)initWithContentSource:(id)arg1 config:(id)arg2 token:(id)arg3 ;
-(FBMediaUploadConfig *)config;
-(NSString *)token;
-(FBMediaUploadContentSource *)contentSource;
@end

