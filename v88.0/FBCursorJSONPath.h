/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBCursorJSONPath : NSObject {

	NSString* _parentRequestName;
	NSString* _connectionName;
	NSString* _targetID;
	NSString* _cursorType;

}

@property (nonatomic,copy) NSString * parentRequestName;              //@synthesize parentRequestName=_parentRequestName - In the implementation block
@property (nonatomic,copy) NSString * connectionName;                 //@synthesize connectionName=_connectionName - In the implementation block
@property (nonatomic,copy) NSString * targetID;                       //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,copy) NSString * cursorType;                     //@synthesize cursorType=_cursorType - In the implementation block
-(void)setConnectionName:(NSString *)arg1 ;
-(void)setCursorType:(NSString *)arg1 ;
-(NSString *)parentRequestName;
-(void)setParentRequestName:(NSString *)arg1 ;
-(NSString *)connectionName;
-(NSString *)cursorType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)stringValue;
-(void)setTargetID:(NSString *)arg1 ;
-(NSString *)targetID;
@end

