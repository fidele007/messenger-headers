/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerCustomPrivacyInclusionData : FBValueObject <NSCopying> {

	unsigned long long _kind;
	NSString* _primaryAllowToken;
	NSString* _listType;
	NSString* _listGraphQLID;

}

@property (nonatomic,readonly) unsigned long long kind;                        //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryAllowToken;              //@synthesize primaryAllowToken=_primaryAllowToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * listType;                       //@synthesize listType=_listType - In the implementation block
@property (nonatomic,copy,readonly) NSString * listGraphQLID;                  //@synthesize listGraphQLID=_listGraphQLID - In the implementation block
-(NSString *)listGraphQLID;
-(id)initWithKind:(unsigned long long)arg1 primaryAllowToken:(id)arg2 listType:(id)arg3 listGraphQLID:(id)arg4 ;
-(NSString *)primaryAllowToken;
-(unsigned long long)kind;
-(NSString *)listType;
@end

