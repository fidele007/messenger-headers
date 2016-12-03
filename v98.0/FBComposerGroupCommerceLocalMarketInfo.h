/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerGroupCommerceLocalMarketInfo : FBValueObject <FBObjectShallowCopyProtocol, NSCopying, NSCoding> {

	BOOL _shouldPostToMarketplace;
	NSString* _marketplaceID;
	NSString* _originatedGroupID;

}

@property (nonatomic,copy,readonly) NSString * marketplaceID;                  //@synthesize marketplaceID=_marketplaceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * originatedGroupID;              //@synthesize originatedGroupID=_originatedGroupID - In the implementation block
@property (nonatomic,readonly) BOOL shouldPostToMarketplace;                   //@synthesize shouldPostToMarketplace=_shouldPostToMarketplace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMarketplaceID:(id)arg1 originatedGroupID:(id)arg2 shouldPostToMarketplace:(BOOL)arg3 ;
-(NSString *)marketplaceID;
-(NSString *)originatedGroupID;
-(BOOL)shouldPostToMarketplace;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shallowCopy;
@end

