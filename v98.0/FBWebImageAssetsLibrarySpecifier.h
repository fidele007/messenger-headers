/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBWebImageSpecifier.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface FBWebImageAssetsLibrarySpecifier : FBValueObject <FBWebImageSpecifier, NSCopying> {

	unsigned long long _indexHint;
	NSURL* _assetURL;
	NSURL* _groupURL;
	long long _assetSizes;
	NSString* _logicalIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long indexHint;                   //@synthesize indexHint=_indexHint - In the implementation block
@property (nonatomic,copy,readonly) NSURL * assetURL;                          //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * groupURL;                          //@synthesize groupURL=_groupURL - In the implementation block
@property (nonatomic,readonly) long long assetSizes;                           //@synthesize assetSizes=_assetSizes - In the implementation block
@property (nonatomic,copy,readonly) NSString * logicalIdentifier;              //@synthesize logicalIdentifier=_logicalIdentifier - In the implementation block
+(id)type;
-(unsigned long long)indexHint;
-(NSString *)logicalIdentifier;
-(long long)assetSizes;
-(id)initWithIndexHint:(unsigned long long)arg1 assetURL:(id)arg2 groupURL:(id)arg3 assetSizes:(long long)arg4 logicalIdentifier:(id)arg5 ;
-(id)initWithIndexHint:(unsigned long long)arg1 assetURL:(id)arg2 groupURL:(id)arg3 assetSizes:(long long)arg4 ;
-(NSURL *)groupURL;
-(NSURL *)assetURL;
@end
