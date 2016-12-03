/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBNuxConfiguration : NSObject <NSCoding> {

	NSString* _name;
	NSString* _nuxID;

}

@property (nonatomic,copy) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * nuxID;              //@synthesize nuxID=_nuxID - In the implementation block
+(id)configurationWithName:(id)arg1 nuxID:(id)arg2 ;
-(NSString *)nuxID;
-(void)setNuxID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end
