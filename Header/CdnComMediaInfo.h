//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CdnComMediaInfo : NSObject
{
    unsigned int _m_uiFileTotalLen;
    unsigned int _m_uiScene;
    NSString *_m_nsClientMsgID;
    NSString *_m_nsFilePath;
    NSString *_m_nsFileID;
    NSString *_m_nsAesKey;
    NSString *_m_nsExtInfo;
}

@property(retain, nonatomic) NSString *m_nsExtInfo; // @synthesize m_nsExtInfo=_m_nsExtInfo;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene=_m_uiScene;
@property(nonatomic) unsigned int m_uiFileTotalLen; // @synthesize m_uiFileTotalLen=_m_uiFileTotalLen;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey=_m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsFileID; // @synthesize m_nsFileID=_m_nsFileID;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath=_m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID=_m_nsClientMsgID;
- (void).cxx_destruct;

@end

