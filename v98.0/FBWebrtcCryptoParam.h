/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBWebrtcCryptoParam : NSObject <TBase, NSCoding> {

	int __tag;
	int __suite;
	NSString* __keyParams;
	BOOL __tag_isset;
	BOOL __suite_isset;
	BOOL __keyParams_isset;

}

@property (assign,setter=setTag:,getter=tag,nonatomic) int tag; 
@property (assign,setter=setSuite:,getter=suite,nonatomic) int suite; 
@property (setter=setKeyParams:,getter=keyParams,nonatomic,retain) NSString * keyParams; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setSuite:(int)arg1 ;
-(void)setKeyParams:(NSString *)arg1 ;
-(id)initWithTag:(int)arg1 suite:(int)arg2 keyParams:(id)arg3 ;
-(BOOL)tagIsSet;
-(void)unsetTag;
-(int)suite;
-(BOOL)suiteIsSet;
-(void)unsetSuite;
-(NSString *)keyParams;
-(BOOL)keyParamsIsSet;
-(void)unsetKeyParams;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(int)tag;
-(void)setTag:(int)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
@end

