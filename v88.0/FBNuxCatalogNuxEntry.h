/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class FBNuxConfiguration, NSMutableDictionary;

@interface FBNuxCatalogNuxEntry : NSObject <NSCoding> {

	FBNuxConfiguration* _nuxConfiguration;
	NSMutableDictionary* _recordsByVersion;

}

@property (nonatomic,readonly) FBNuxConfiguration * nuxConfiguration;               //@synthesize nuxConfiguration=_nuxConfiguration - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * recordsByVersion;              //@synthesize recordsByVersion=_recordsByVersion - In the implementation block
-(FBNuxConfiguration *)nuxConfiguration;
-(NSMutableDictionary *)recordsByVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
@end
