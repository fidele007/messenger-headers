/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDictionary;

@interface FBMMessageAttribution : FBValueObject <NSCoding, NSCopying> {

	NSString* _attributedAppFBID;
	NSString* _attributedAppName;
	NSString* _iTunesStoreId;
	NSURL* _appIconURL;
	NSString* _attributedAppMetadata;
	unsigned long long _attributionVisibility;
	NSDictionary* _otherUserAppScopedIds;
	long long _attributionType;

}

@property (nonatomic,copy,readonly) NSString * attributedAppFBID;                      //@synthesize attributedAppFBID=_attributedAppFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * attributedAppName;                      //@synthesize attributedAppName=_attributedAppName - In the implementation block
@property (nonatomic,copy,readonly) NSString * iTunesStoreId;                          //@synthesize iTunesStoreId=_iTunesStoreId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * appIconURL;                                //@synthesize appIconURL=_appIconURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * attributedAppMetadata;                  //@synthesize attributedAppMetadata=_attributedAppMetadata - In the implementation block
@property (nonatomic,readonly) unsigned long long attributionVisibility;               //@synthesize attributionVisibility=_attributionVisibility - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * otherUserAppScopedIds;              //@synthesize otherUserAppScopedIds=_otherUserAppScopedIds - In the implementation block
@property (nonatomic,readonly) long long attributionType;                              //@synthesize attributionType=_attributionType - In the implementation block
-(unsigned long long)attributionVisibility;
-(long long)attributionType;
-(NSURL *)appIconURL;
-(NSString *)attributedAppName;
-(NSString *)attributedAppFBID;
-(NSDictionary *)otherUserAppScopedIds;
-(NSString *)attributedAppMetadata;
-(NSString *)iTunesStoreId;
-(id)initWithAttributedAppFBID:(id)arg1 attributedAppName:(id)arg2 iTunesStoreId:(id)arg3 appIconURL:(id)arg4 attributedAppMetadata:(id)arg5 attributionVisibility:(unsigned long long)arg6 otherUserAppScopedIds:(id)arg7 attributionType:(long long)arg8 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
