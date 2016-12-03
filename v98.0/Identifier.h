/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, LPPhoneNumber;

@interface Identifier : NSObject <NSCopying> {

	NSString* _userId;
	NSString* _value;
	NSString* _normalizedValue;
	NSString* _label;
	LPPhoneNumber* _phoneNumber;
	int _identifierType;
	BOOL _isMobile;
	BOOL _isVerified;
	BOOL _picked;
	NSString* _name;

}

@property (nonatomic,copy) NSString * userId;                          //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy) NSString * normalizedValue;                 //@synthesize normalizedValue=_normalizedValue - In the implementation block
@property (nonatomic,copy) NSString * value;                           //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * label;                           //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) LPPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) int identifierType;                       //@synthesize identifierType=_identifierType - In the implementation block
@property (assign,nonatomic) BOOL isMobile;                            //@synthesize isMobile=_isMobile - In the implementation block
@property (assign,nonatomic) BOOL isVerified;                          //@synthesize isVerified=_isVerified - In the implementation block
@property (assign,nonatomic) BOOL picked;                              //@synthesize picked=_picked - In the implementation block
@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
-(void)setIsVerified:(BOOL)arg1 ;
-(id)initWithMessengerUserId:(id)arg1 name:(id)arg2 label:(id)arg3 ;
-(void)setNormalizedValue:(NSString *)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 userId:(id)arg2 name:(id)arg3 label:(id)arg4 ;
-(id)initWithNormalizedPhone:(id)arg1 userId:(id)arg2 name:(id)arg3 label:(id)arg4 ;
-(id)initWithEmail:(id)arg1 userId:(id)arg2 name:(id)arg3 label:(id)arg4 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)key;
-(id)displayString;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(LPPhoneNumber *)phoneNumber;
-(int)identifierType;
-(void)setIdentifierType:(int)arg1 ;
-(NSString *)normalizedValue;
-(void)setPicked:(BOOL)arg1 ;
-(BOOL)isMobile;
-(void)setIsMobile:(BOOL)arg1 ;
-(BOOL)picked;
-(void)setPhoneNumber:(LPPhoneNumber *)arg1 ;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)userId;
-(BOOL)isVerified;
@end

