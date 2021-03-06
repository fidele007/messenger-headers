/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBGraphSearchSource : FBGraphQLInput {

	NSString* _source;
	NSNumber* _size;

}

@property (nonatomic,copy) NSString * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSNumber * size;                //@synthesize size=_size - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)size;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(void)setSize:(NSNumber *)arg1 ;
@end

